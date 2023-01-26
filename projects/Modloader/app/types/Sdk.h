#pragma once
#include <Modloader/app/structs/Sdk.h>
#include <Modloader/app/structs/Sdk__Array.h>
#include <Modloader/app/structs/Sdk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sdk {
        inline app::Sdk__Class** type_info() {
            static app::Sdk__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sdk__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sdk__Class* get_class() {
            return il2cpp::get_class<app::Sdk__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Sdk");
        }
        inline app::Sdk* create() {
            return il2cpp::create_object<app::Sdk>(get_class());
        }
        inline app::Sdk__Array* create_array(int size) {
            return il2cpp::array_new<app::Sdk__Array>(get_class(), size);
        }
        inline app::Sdk__Array* create_array(const std::vector<app::Sdk*>& items) {
            return il2cpp::array_new<app::Sdk__Array>(get_class(), items);
        }
    } // namespace Sdk
} // namespace app::classes::types
#pragma once
#include <Modloader/app/structs/SDK.h>
#include <Modloader/app/structs/SDK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SDK {
        inline app::SDK__Class** type_info() {
            static app::SDK__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SDK__Class**)(modloader::win::memory::resolve_rva(0x04787F60));
            }
            return cache;
        }
        inline app::SDK__Class* get_class() {
            return il2cpp::get_class<app::SDK__Class>(type_info(), "XGamingRuntime", "SDK");
        }
        inline app::SDK* create() {
            return il2cpp::create_object<app::SDK>(get_class());
        }
    } // namespace SDK
} // namespace app::classes::types
