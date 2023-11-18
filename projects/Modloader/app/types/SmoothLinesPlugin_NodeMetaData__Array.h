#pragma once
#include <Modloader/app/structs/SmoothLinesPlugin_NodeMetaData__Array.h>
#include <Modloader/app/structs/SmoothLinesPlugin_NodeMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothLinesPlugin_NodeMetaData__Array {
        inline app::SmoothLinesPlugin_NodeMetaData__Array__Class** type_info() {
            static app::SmoothLinesPlugin_NodeMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmoothLinesPlugin_NodeMetaData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmoothLinesPlugin_NodeMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::SmoothLinesPlugin_NodeMetaData__Array__Class>(type_info(), "", "SmoothLinesPlugin+NodeMetaData[]");
        }
        inline app::SmoothLinesPlugin_NodeMetaData__Array* create() {
            return il2cpp::create_object<app::SmoothLinesPlugin_NodeMetaData__Array>(get_class());
        }
    } // namespace SmoothLinesPlugin_NodeMetaData__Array
} // namespace app::classes::types
