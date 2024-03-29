#pragma once
#include <Modloader/app/structs/CDSCollectionETWBCLProvider_1.h>
#include <Modloader/app/structs/CDSCollectionETWBCLProvider_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CDSCollectionETWBCLProvider_1 {
        inline app::CDSCollectionETWBCLProvider_1__Class** type_info() {
            static app::CDSCollectionETWBCLProvider_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CDSCollectionETWBCLProvider_1__Class**)(modloader::win::memory::resolve_rva(0x047294F8));
            }
            return cache;
        }
        inline app::CDSCollectionETWBCLProvider_1__Class* get_class() {
            return il2cpp::get_class<app::CDSCollectionETWBCLProvider_1__Class>(type_info(), "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
        }
        inline app::CDSCollectionETWBCLProvider_1* create() {
            return il2cpp::create_object<app::CDSCollectionETWBCLProvider_1>(get_class());
        }
    } // namespace CDSCollectionETWBCLProvider_1
} // namespace app::classes::types
