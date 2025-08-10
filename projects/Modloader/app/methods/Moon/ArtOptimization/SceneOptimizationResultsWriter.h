#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Moon_ArtOptimization_SceneOptimizationResults_.h>
#include <Modloader/app/structs/SceneOptimizationResults.h>
#include <Modloader/app/structs/SceneOptimizationResultsWriter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::ArtOptimization::SceneOptimizationResultsWriter {
    IL2CPP_REGISTER_METHOD(
        0x002FA490,
        void,
        ctor,
        app::SceneOptimizationResultsWriter* this_ptr,
        app::Dictionary_2_System_String_Moon_ArtOptimization_SceneOptimizationResults_* scene_results
    )
    IL2CPP_REGISTER_METHOD(0x00CB0310, void, WriteReport, app::SceneOptimizationResultsWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00CB1630,
        app::String*,
        PrintSceneResult,
        app::SceneOptimizationResultsWriter* this_ptr,
        app::SceneOptimizationResults* scene_result
    )
} // namespace app::classes::Moon::ArtOptimization::SceneOptimizationResultsWriter
