#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Sharpen_Algorithm__Enum__Class.h>
#include <Modloader/app/structs/Sharpen_Algorithm__Enum.h>

namespace app::classes::types {
    namespace Sharpen_Algorithm__Enum {
        namespace {
            inline app::Sharpen_Algorithm__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Sharpen_Algorithm__Enum__Class** type_info = &type_info_ref;
        inline app::Sharpen_Algorithm__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Sharpen_Algorithm__Enum__Class>(type_info, "Colorful", "Sharpen", "Algorithm");
        }
        inline app::Sharpen_Algorithm__Enum* create() {
            return il2cpp::create_object<app::Sharpen_Algorithm__Enum>(get_class());
        }
    } // namespace Sharpen_Algorithm__Enum
} // namespace app::classes::types
