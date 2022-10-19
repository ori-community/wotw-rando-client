#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmoothLinesPlugin_NodeMetaData__Array {
        namespace {
            inline app::SmoothLinesPlugin_NodeMetaData__Array__Class* type_info_ref = nullptr;
        }
        inline app::SmoothLinesPlugin_NodeMetaData__Array__Class** type_info = &type_info_ref;
        inline app::SmoothLinesPlugin_NodeMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::SmoothLinesPlugin_NodeMetaData__Array__Class>(type_info, "", "SmoothLinesPlugin+NodeMetaData[]");
        }
        inline app::SmoothLinesPlugin_NodeMetaData__Array* create() {
            return il2cpp::create_object<app::SmoothLinesPlugin_NodeMetaData__Array>(get_class());
        }
    } // namespace SmoothLinesPlugin_NodeMetaData__Array
} // namespace app::classes::types
