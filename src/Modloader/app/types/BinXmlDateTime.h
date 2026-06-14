#pragma once
#include <Modloader/app/structs/BinXmlDateTime.h>
#include <Modloader/app/structs/BinXmlDateTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinXmlDateTime {
        inline app::BinXmlDateTime__Class** type_info() {
            static app::BinXmlDateTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinXmlDateTime__Class**)(modloader::win::memory::resolve_rva(0x04742740));
            }
            return cache;
        }
        inline app::BinXmlDateTime__Class* get_class() {
            return il2cpp::get_class<app::BinXmlDateTime__Class>(type_info(), "System.Xml", "BinXmlDateTime");
        }
        inline app::BinXmlDateTime* create() {
            return il2cpp::create_object<app::BinXmlDateTime>(get_class());
        }
    } // namespace BinXmlDateTime
} // namespace app::classes::types
