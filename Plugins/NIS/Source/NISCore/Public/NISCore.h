/*
* Copyright (c) 2022 - 2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
* NVIDIA CORPORATION, its affiliates and licensors retain all intellectual
* property and proprietary rights in and to this material, related
* documentation and any modifications thereto. Any use, reproduction,
* disclosure or distribution of this material and related documentation
* without an express license agreement from NVIDIA CORPORATION or
* its affiliates is strictly prohibited.
*/

#pragma once

#include "Modules/ModuleManager.h"

class FNISViewExtension;
class FNVImageUpscaler;

class FNISCoreModule final: public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule();
	virtual void ShutdownModule();

private:
	TSharedPtr< FNISViewExtension , ESPMode::ThreadSafe> NISViewExtension;
	TUniquePtr<FNVImageUpscaler> NISUpscaler;
};
