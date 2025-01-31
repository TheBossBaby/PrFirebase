// Copyright 2021-2022 Anton Rassadin. All Rights Reserved.

#pragma once

#include "PrFirebaseAnalyticsModule.h"

#include "PrFirebaseAnalyticsModule_iOS.generated.h"

UCLASS()
class UPrFirebaseAnalyticsModule_iOS : public UPrFirebaseAnalyticsModule
{
	GENERATED_BODY()

#if WITH_FIREBASE && PLATFORM_IOS

public:
	virtual void LogImpression(FPrFirebaseImpressionData ImpressionData) override;

	virtual void RequestAppInstanceId() override;

	virtual FString GetAppInstanceId() override;

	virtual void LogRevenue(float RevenueUSD) override;

#endif
};
