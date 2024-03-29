#pragma once
#include <Modloader/app/structs/CDSCollectionETWBCLProvider.h>
#include <Modloader/app/structs/CDSCollectionETWBCLProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CDSCollectionETWBCLProvider {
        inline app::CDSCollectionETWBCLProvider__Class** type_info() {
            static app::CDSCollectionETWBCLProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CDSCollectionETWBCLProvider__Class**)(modloader::win::memory::resolve_rva(0x0478A8D8));
            }
            return cache;
        }
        inline app::CDSCollectionETWBCLProvider__Class* get_class() {
            return il2cpp::get_class<app::CDSCollectionETWBCLProvider__Class>(type_info(), "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
        }
        inline app::CDSCollectionETWBCLProvider* create() {
            return il2cpp::create_object<app::CDSCollectionETWBCLProvider>(get_class());
        }
    } // namespace CDSCollectionETWBCLProvider
} // namespace app::classes::types
