#pragma once
#include <Modloader/app/structs/IInstantiateObserver.h>
#include <Modloader/app/structs/IInstantiateObserver__Array.h>
#include <Modloader/app/structs/IInstantiateObserver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInstantiateObserver {
        inline app::IInstantiateObserver__Class** type_info() {
            static app::IInstantiateObserver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInstantiateObserver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInstantiateObserver__Class* get_class() {
            return il2cpp::get_class<app::IInstantiateObserver__Class>(type_info(), "", "IInstantiateObserver");
        }
        inline app::IInstantiateObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::IInstantiateObserver__Array>(get_class(), size);
        }
        inline app::IInstantiateObserver__Array* create_array(const std::vector<app::IInstantiateObserver*>& items) {
            return il2cpp::array_new<app::IInstantiateObserver__Array>(get_class(), items);
        }
    } // namespace IInstantiateObserver
} // namespace app::classes::types
