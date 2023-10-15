model = keras.Sequential()
model.add(keras.layers.LSTM(units=80, input_shape=(INPUT_DAYS, 1)))
model.add(keras.layers.Dense(1))
model.compile(optimizer='adam', loss='mean_squared_error', metrics='RootMeanSquaredError')


9.0


kswc39757


해볼거

model = keras.Sequential()
model.add(keras.layers.GRU(units=80, input_shape=(INPUT_DAYS, 1)))
model.add(keras.layers.Dense(1))
model.compile(optimizer='adam', loss='mean_squared_error', metrics='RootMeanSquaredError')


WAVENET