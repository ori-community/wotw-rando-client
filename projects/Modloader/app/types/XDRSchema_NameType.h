#pragma once
#include <Modloader/app/structs/XDRSchema_NameType.h>
#include <Modloader/app/structs/XDRSchema_NameType__Array.h>
#include <Modloader/app/structs/XDRSchema_NameType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XDRSchema_NameType {
        inline app::XDRSchema_NameType__Class** type_info() {
            static app::XDRSchema_NameType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XDRSchema_NameType__Class**)(modloader::win::memory::resolve_rva(0x0473D818));
            }
            return cache;
        }
        inline app::XDRSchema_NameType__Class* get_class() {
            return il2cpp::get_nested_class<app::XDRSchema_NameType__Class>(type_info(), "System.Data", "XDRSchema", "NameType");
        }
        inline app::XDRSchema_NameType* create() {
            return il2cpp::create_object<app::XDRSchema_NameType>(get_class());
        }
        inline app::XDRSchema_NameType__Array* create_array(int size) {
            return il2cpp::array_new<app::XDRSchema_NameType__Array>(get_class(), size);
        }
        inline app::XDRSchema_NameType__Array* create_array(const std::vector<app::XDRSchema_NameType*>& items) {
            return il2cpp::array_new<app::XDRSchema_NameType__Array>(get_class(), items);
        }
    } // namespace XDRSchema_NameType
} // namespace app::classes::types
