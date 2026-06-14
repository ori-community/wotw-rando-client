#pragma once
#include <Modloader/app/structs/DelegateHelpers_TypeInfo.h>
#include <Modloader/app/structs/DelegateHelpers_TypeInfo__Array.h>
#include <Modloader/app/structs/DelegateHelpers_TypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegateHelpers_TypeInfo {
        inline app::DelegateHelpers_TypeInfo__Class** type_info() {
            static app::DelegateHelpers_TypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelegateHelpers_TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0472B958));
            }
            return cache;
        }
        inline app::DelegateHelpers_TypeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::DelegateHelpers_TypeInfo__Class>(type_info(), "System.Linq.Expressions.Compiler", "DelegateHelpers", "TypeInfo");
        }
        inline app::DelegateHelpers_TypeInfo* create() {
            return il2cpp::create_object<app::DelegateHelpers_TypeInfo>(get_class());
        }
        inline app::DelegateHelpers_TypeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DelegateHelpers_TypeInfo__Array>(get_class(), size);
        }
        inline app::DelegateHelpers_TypeInfo__Array* create_array(const std::vector<app::DelegateHelpers_TypeInfo*>& items) {
            return il2cpp::array_new<app::DelegateHelpers_TypeInfo__Array>(get_class(), items);
        }
    } // namespace DelegateHelpers_TypeInfo
} // namespace app::classes::types
