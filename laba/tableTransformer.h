#pragma once
#ifndef TABLETRANSFORMER_H
#define TABLETRANSFORMER_H
#include "table.h"

namespace furniture
{
	class TableTransformer :virtual public Table
	{

	public:
		TableTransformer(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht,
			const double& height, const int& numberOfLegs, const int& numberOfShuffles,
			const int& decompositionCoefficient);

		~TableTransformer()override = default;

		TableTransformer& setDecompositionCoefficient(const int& decompositionCoefficient);

		int getDecompositionCoefficient() const;

		double usefulSpace() const override;

		void info() const override;

	protected:
		void specificInfo() const override;

	private:
		int decompositionCoefficient;

	};


}



#endif // !TABLETRANSFORMER_H

