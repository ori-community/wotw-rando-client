#pragma once
#include <Modloader/app/structs/XsdBuilder_XsdEndChildFunction.h>
#include <Modloader/app/structs/XsdBuilder_XsdEndChildFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdEndChildFunction {
        inline app::XsdBuilder_XsdEndChildFunction__Class** type_info() {
            static app::XsdBuilder_XsdEndChildFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdBuilder_XsdEndChildFunction__Class**)(modloader::win::memory::resolve_rva(0x047066E0));
            }
            return cache;
        }
        inline app::XsdBuilder_XsdEndChildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdEndChildFunction__Class>(type_info(), "System.Xml.Schema", "XsdBuilder", "XsdEndChildFunction");
        }
        inline app::XsdBuilder_XsdEndChildFunction* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdEndChildFunction>(get_class());
        }
    } // namespace XsdBuilder_XsdEndChildFunction
} // namespace app::classes::types
