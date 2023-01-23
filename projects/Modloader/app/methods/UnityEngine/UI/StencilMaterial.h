#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/StencilOp__Enum.h>
#include <Modloader/app/structs/CompareFunction__Enum.h>
#include <Modloader/app/structs/ColorWriteMask__Enum.h>

namespace app::classes::UnityEngine::UI::StencilMaterial {
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Material*, Add_1, (app::Material * base_mat, int32_t stencil_i_d))
    IL2CPP_REGISTER_METHOD(0x02678310, app::Material*, Add_2, (app::Material * base_mat, int32_t stencil_i_d, app::StencilOp__Enum operation, app::CompareFunction__Enum compare_function, app::ColorWriteMask__Enum color_write_mask))
    IL2CPP_REGISTER_METHOD(0x02678400, app::Material*, Add_3, (app::Material * base_mat, int32_t stencil_i_d, app::StencilOp__Enum operation, app::CompareFunction__Enum compare_function, app::ColorWriteMask__Enum color_write_mask, int32_t read_mask, int32_t write_mask))
    IL2CPP_REGISTER_METHOD(0x02678E70, void, Remove, (app::Material * custom_mat))
    IL2CPP_REGISTER_METHOD(0x026790A0, void, ClearAll, ())
    IL2CPP_REGISTER_METHOD(0x02679250, void, cctor, ())
} // namespace app::classes::UnityEngine::UI::StencilMaterial
