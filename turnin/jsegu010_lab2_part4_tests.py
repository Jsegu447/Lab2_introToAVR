
tests = [ {'description': 'EXCEED 140kg',
    'steps': [ {'inputs': [('PINA',0x50),('PINB',0x50),('PINC',0x50)], 'iterations': 5 } ],
    'expected': [('PORTD',0x01)],
    },
     {'description': 'NOT BALANCE',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x00),('PINC',0x55)], 'iterations': 5 } ],
    'expected': [('PORTD',0x02)],
    },
 {'description': 'EXCEED AND UNBALANCE',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x50),('PINC',0x55)], 'iterations': 5 } ],
    'expected': [('PORTD',0x03)],
    },

    ]
#watch = ['PORTD']


