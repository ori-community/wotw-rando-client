#pragma once
#include <Modloader/app/structs/ValidatingReaderNodeData__Array.h>
#include <Modloader/app/structs/ValidatingReaderNodeData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidatingReaderNodeData__Array {
        inline app::ValidatingReaderNodeData__Array__Class** type_info() {
            static app::ValidatingReaderNodeData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidatingReaderNodeData__Array__Class**)(modloader::win::memory::resolve_rva(0x04792EE8));
            }
            return cache;
        }
        inline app::ValidatingReaderNodeData__Array__Class* get_class() {
            return il2cpp::get_class<app::ValidatingReaderNodeData__Array__Class>(type_info(), "System.Xml", "ValidatingReaderNodeData[]");
        }
        inline app::ValidatingReaderNodeData__Array* create() {
            return il2cpp::create_object<app::ValidatingReaderNodeData__Array>(get_class());
        }
    } // namespace ValidatingReaderNodeData__Array
} // namespace app::classes::types
