import json

#x =  '{ "name":"John",}'


def DecodeJsonArray()

array = '{"drinks": ["coffee", "tea", "water"]}'
data = json.loads(array)

for element in data['drinks']:
    print (element)
    
x =  '{ "name" : [ "Engineer", "SupportService", "Devloper" ]}'
y = json.loads(x)

print(y["name"])


# with open('config.json','r+', encoding='utf-8') as f:
    # config = json.load(f)

# threads = config['threads']

# print(threads)