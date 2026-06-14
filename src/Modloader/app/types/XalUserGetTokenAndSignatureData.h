#pragma once
#include <Modloader/app/structs/XalUserGetTokenAndSignatureData.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureData__Boxed.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUserGetTokenAndSignatureData {
        inline app::XalUserGetTokenAndSignatureData__Class** type_info() {
            static app::XalUserGetTokenAndSignatureData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalUserGetTokenAndSignatureData__Class**)(modloader::win::memory::resolve_rva(0x0470DE60));
            }
            return cache;
        }
        inline app::XalUserGetTokenAndSignatureData__Class* get_class() {
            return il2cpp::get_class<app::XalUserGetTokenAndSignatureData__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUserGetTokenAndSignatureData");
        }
        inline app::XalUserGetTokenAndSignatureData* create() {
            return il2cpp::create_object<app::XalUserGetTokenAndSignatureData>(get_class());
        }
        inline app::XalUserGetTokenAndSignatureData__Boxed* box(app::XalUserGetTokenAndSignatureData value) {
            return il2cpp::box_value<app::XalUserGetTokenAndSignatureData__Boxed>(get_class(), value);
        }
    } // namespace XalUserGetTokenAndSignatureData
} // namespace app::classes::types
