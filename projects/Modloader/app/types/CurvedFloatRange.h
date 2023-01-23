#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CurvedFloatRange__Class.h>
#include <Modloader/app/structs/CurvedFloatRange.h>

namespace app::classes::types {
    namespace CurvedFloatRange {
        namespace {
            inline app::CurvedFloatRange__Class* type_info_ref = nullptr;
        }
        inline app::CurvedFloatRange__Class** type_info = &type_info_ref;
        inline app::CurvedFloatRange__Class* get_class() {
            return il2cpp::get_class<app::CurvedFloatRange__Class>(type_info, "", "CurvedFloatRange");
        }
        inline app::CurvedFloatRange* create() {
            return il2cpp::create_object<app::CurvedFloatRange>(get_class());
        }
    } // namespace CurvedFloatRange
} // namespace app::classes::types
