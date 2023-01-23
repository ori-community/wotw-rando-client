#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextAreaAttribute.h>

namespace app::classes::UnityEngine::TextAreaAttribute {
    IL2CPP_REGISTER_METHOD(0x02C65C70, void, ctor_1, (app::TextAreaAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor_2, (app::TextAreaAttribute * this_ptr, int32_t min_lines, int32_t max_lines))
} // namespace app::classes::UnityEngine::TextAreaAttribute
