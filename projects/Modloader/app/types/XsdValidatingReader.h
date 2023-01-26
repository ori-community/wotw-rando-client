#pragma once
#include <Modloader/app/structs/XsdValidatingReader.h>
#include <Modloader/app/structs/XsdValidatingReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdValidatingReader {
        inline app::XsdValidatingReader__Class** type_info() {
            static app::XsdValidatingReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdValidatingReader__Class**)(modloader::win::memory::resolve_rva(0x0472B9B8));
            }
            return cache;
        }
        inline app::XsdValidatingReader__Class* get_class() {
            return il2cpp::get_class<app::XsdValidatingReader__Class>(type_info(), "System.Xml", "XsdValidatingReader");
        }
        inline app::XsdValidatingReader* create() {
            return il2cpp::create_object<app::XsdValidatingReader>(get_class());
        }
    } // namespace XsdValidatingReader
} // namespace app::classes::types
