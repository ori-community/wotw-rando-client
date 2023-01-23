#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlendModeType__Enum__Class.h>
#include <Modloader/app/structs/BlendModeType__Enum.h>

namespace app::classes::types {
    namespace BlendModeType__Enum {
        namespace {
            inline app::BlendModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BlendModeType__Enum__Class** type_info = &type_info_ref;
        inline app::BlendModeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendModeType__Enum__Class>(type_info, "", "BlendModeType");
        }
        inline app::BlendModeType__Enum* create() {
            return il2cpp::create_object<app::BlendModeType__Enum>(get_class());
        }
    } // namespace BlendModeType__Enum
} // namespace app::classes::types
