#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGoldenSeinAbility_State__Enum__Class.h>
#include <Modloader/app/structs/SeinGoldenSeinAbility_State__Enum.h>

namespace app::classes::types {
    namespace SeinGoldenSeinAbility_State__Enum {
        namespace {
            inline app::SeinGoldenSeinAbility_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinGoldenSeinAbility_State__Enum__Class** type_info = &type_info_ref;
        inline app::SeinGoldenSeinAbility_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGoldenSeinAbility_State__Enum__Class>(type_info, "", "SeinGoldenSeinAbility", "State");
        }
        inline app::SeinGoldenSeinAbility_State__Enum* create() {
            return il2cpp::create_object<app::SeinGoldenSeinAbility_State__Enum>(get_class());
        }
    } // namespace SeinGoldenSeinAbility_State__Enum
} // namespace app::classes::types
