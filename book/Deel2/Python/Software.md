# Software

Python is an interpreter programming language and thus needs an interpreter (some software). For programming it is always useful to have some software that helps you in writing code and running it. For this course we recommend you to install Mini-Conda, but provide instructions for other software as well.

## Anaconda & MiniConda
**Anaconda** and **Miniconda** are both distributions of the Python and R programming languages, primarily aimed at simplifying package management and deployment for data science, machine learning, and scientific computing. The main difference between these distributions is the amount of disk space required (~4GB for Anaconda, 50 MB for Miniconda). Where Anaconda has already installed all main packages for you, you control with Miniconda precisely what you want to install. Hence, Miniconda is a minimal installer for the Anaconda distribution. It only includes the `conda` package manager (to install packages) and Python, along with their dependencies. It does not come with any pre-installed packages except for these essentials. That also means that it lacks a graphical user interface which is available with Anaconda.

### Install Anaconda
If you want to install Anaconda, see their [website](https://docs.anaconda.com/anaconda/install/). Once installed, you can open Anaconda and choose your *interactive development environments* (IDE), the interface in which you will write your code. We most often use Jupyter Notebook or Jupyter Lab.

### Install Miniconda
We recommend, however, to install Miniconda since it gives you a better idea how your computer works, have more control of what is being installed and takes far less disk space. To install Miniconda, download and run the .exe file as described on their [website](https://docs.anaconda.com/miniconda/miniconda-install/)

Once installed, open the anaconda prompt. This opens a terminal (a text-based interface used to interact with the operating system by executing commands, scripts, or programs). To check whether the installation is correct and which version is installed, type: 

```{code}
conda --version
```

and press enter, the terminal will return the conda version.

Since you installed the minimal installation, we need to install the IDE's we want and the packages that we need. We, at least, need Jupyter, numpy, matplotlib and scipy. A popular library that might come in handy is Pandas.

To install the IDE Jupyter and [Jupyter lab](https://anaconda.org/conda-forge/jupyterlab), run the commands:

```{code}
conda install anaconda::jupyter

conda install -c conda-forge jupyterlab 
```
For the packages, run the commands:

```{code}
conda install conda-forge::matplotlib

conda install conda-forge::numpy

conda install scipy

conda install conda-forge::pandas
```

or with a single sentence:

```{code}
conda install conda-forge::matplotlib conda-forge::numpy conda-forge::scipy conda-forge::pandas
```

```{admonition} conda-forge
conda-forge:: specifies the source from which the packages are installed. It specifies that the packages should be installed from the conda-forge channel, which is a community-driven channel that provides a large collection of packages for conda. 
```

Note that we did not install all packages. You will regularly come across packages that needs to be installed, with the information above and the information provided by the Python community, you will manage to install these interdependencies. 

````{admonition} Using the command line
:class: dropdown
Normally we navigate through our folders by using a graphic interface and clicking through the folders. However, there is another way to navigate through your folders, namely using the command line as we are doing with Anaconda prompt.

When you run the command `dir` it returns the folders and files in the folder you are currently in. You can go to another folder by running the command `cd NAMEFOLDER`. If you want to move to a higher folder, run the command `cd ..`

```{figure} terminaldir.PNG
---
name:
width: 70%
---
Moving through your folder with the command line
```

````

### Jupyter Notebook and Jupyter Lab
In this course we make use of .ipynb files which are Jupyter Notebooks. To run these notebooks we can use IDE's as *Jupyter Notebook* or *Jupyter Lab*. Jupyter Notebook is a web-based interface that allows users to create and share documents with live code, visualizations, and narrative text in a linear format. JupyterLab, on the other hand, is a more advanced interface offering a flexible and modular environment with multiple panels, including notebooks, terminals, and text editors, providing a more versatile experience for interactive computing. I prefer to use Jupyter lab.

To start Jupyter lab, open the Anaconda terminal (Anaconda Prompt), move to the folder where you want to start Jupyter Lab in (where your files are located) and run the command `jupyter lab` in the terminal. A browser is started with which you can open your Notebooks, see {numref}`Figure {number} <fig_jl>`. Our first [notebook ](../../External/fyplc-python/Course%20files/Notebook%201/Notebook%201%20Python%20Basics.ipynb) tells you exactly how these notebooks work and how to develop and run code.

```{figure} jupyterlab.PNG
---
name: fig_jl
width: 90%
---
The Jupyter lab IDE
```

## VSC
A popular code editor is [Visual Studio Code](https://code.visualstudio.com/). It allows you to program in different languages, where it recognizes the commands in that language and adjusts the FONT so that it becomes better readable. Moreover, it allows you to install various packages (such as Jupyter Notebook). It also integrates GIT and allows to code using Co-Pilot, an AI pair programmer. It is not mandatory to install VSC for the course, but you might want to explore it!

## Git
When writing code, especially larger projects, you want to keep track of your changes. Sometimes your code breaks and you want to go back to a previous version where all these troubles weren't there yet. For this purpose we have *version control software*. Most popular is **git**. Git is a distributed version control system that tracks changes in code or files, allowing multiple developers to collaborate efficiently on a project. GitHub is a web-based platform that hosts Git repositories, providing tools for collaboration, code sharing, and version management, often used for open-source and team projects. Here we don't go much deeper than this, but direct you to the [manual of our colleagues at CiTG](https://mude.citg.tudelft.nl/book/programming/programs/git/version_control.html). You may want to check this out a bit later during your first year.

## Vocareum
We sometimes make use of **Vocareum**. Vocareum is a cloud-based platform designed for educational institutions to provide hands-on learning experiences, particularly in coding, data science, and cloud computing. It offers a virtual lab environment where students can complete assignments, receive automated feedback, and instructors can manage and grade coursework efficiently. We make use of Vocareum to grade your work and provide feedback.

If you want (online) help from the teaching assistants, you should upload your work to Vocareum. We can access your work, make changes and help you out. Moreover, you are to upload your exam(s) to Vocareum so that we can grade your work. Hence, get convenient with this platform.