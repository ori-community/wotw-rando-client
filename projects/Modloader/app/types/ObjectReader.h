#pragma once
#include <Modloader/app/structs/ObjectReader.h>
#include <Modloader/app/structs/ObjectReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectReader {
        inline app::ObjectReader__Class** type_info() {
            static app::ObjectReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectReader__Class**)(modloader::win::memory::resolve_rva(0x04705740));
            }
            return cache;
        }
        inline app::ObjectReader__Class* get_class() {
            return il2cpp::get_class<app::ObjectReader__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
        }
        inline app::ObjectReader* create() {
            return il2cpp::create_object<app::ObjectReader>(get_class());
        }
    } // namespace ObjectReader
} // namespace app::classes::types
