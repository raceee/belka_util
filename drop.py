'''
This is just a view file to see the columns of the dataset. Maybe more util will come later here
'''
import pandas as pd

if __name__ == "__main__":
    df = pd.read_csv("train.csv", nrows=10)

    print(df.columns)

    df.to_csv("train_sample.csv", index=False)
    