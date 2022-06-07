#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::StencilState {
    IL2CPP_REGISTER_METHOD(0x001F2150, void, ctor_1, (app::StencilState__Boxed * this_ptr, bool enabled, uint8_t read_mask, uint8_t write_mask, app::CompareFunction__Enum compare_function, app::StencilOp__Enum pass_operation, app::StencilOp__Enum fail_operation, app::StencilOp__Enum z_fail_operation))
    IL2CPP_REGISTER_METHOD(0x001F21B0, void, ctor_2, (app::StencilState__Boxed * this_ptr, bool enabled, uint8_t read_mask, uint8_t write_mask, app::CompareFunction__Enum compare_function_front, app::StencilOp__Enum pass_operation_front, app::StencilOp__Enum fail_operation_front, app::StencilOp__Enum z_fail_operation_front, app::CompareFunction__Enum compare_function_back, app::StencilOp__Enum pass_operation_back, app::StencilOp__Enum fail_operation_back, app::StencilOp__Enum z_fail_operation_back))
    IL2CPP_REGISTER_METHOD(0x025252C0, app::StencilState, get_Default, ())
}
