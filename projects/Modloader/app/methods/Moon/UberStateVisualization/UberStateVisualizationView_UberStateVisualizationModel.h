#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationModel.h>
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationModel__Boxed.h>

namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationView_UberStateVisualizationModel {
    IL2CPP_REGISTER_METHOD(0x030CB600, app::UberStateVisualizationView_UberStateVisualizationModel, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x00245140, void, Clear, (app::UberStateVisualizationView_UberStateVisualizationModel__Boxed * this_ptr))
} // namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationView_UberStateVisualizationModel
