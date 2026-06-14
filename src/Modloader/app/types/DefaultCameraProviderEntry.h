#pragma once
#include <Modloader/app/structs/DefaultCameraProviderEntry.h>
#include <Modloader/app/structs/DefaultCameraProviderEntry__Array.h>
#include <Modloader/app/structs/DefaultCameraProviderEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultCameraProviderEntry {
        inline app::DefaultCameraProviderEntry__Class** type_info() {
            static app::DefaultCameraProviderEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultCameraProviderEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultCameraProviderEntry__Class* get_class() {
            return il2cpp::get_class<app::DefaultCameraProviderEntry__Class>(type_info(), "", "DefaultCameraProviderEntry");
        }
        inline app::DefaultCameraProviderEntry* create() {
            return il2cpp::create_object<app::DefaultCameraProviderEntry>(get_class());
        }
        inline app::DefaultCameraProviderEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DefaultCameraProviderEntry__Array>(get_class(), size);
        }
        inline app::DefaultCameraProviderEntry__Array* create_array(const std::vector<app::DefaultCameraProviderEntry*>& items) {
            return il2cpp::array_new<app::DefaultCameraProviderEntry__Array>(get_class(), items);
        }
    } // namespace DefaultCameraProviderEntry
} // namespace app::classes::types
