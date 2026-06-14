#pragma once
#include <Modloader/app/structs/AkQueryRTPCValue__Enum.h>
#include <Modloader/app/structs/AkQueryRTPCValue__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkQueryRTPCValue__Enum {
        inline app::AkQueryRTPCValue__Enum__Class** type_info() {
            static app::AkQueryRTPCValue__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkQueryRTPCValue__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkQueryRTPCValue__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkQueryRTPCValue__Enum__Class>(type_info(), "", "AkQueryRTPCValue");
        }
        inline app::AkQueryRTPCValue__Enum* create() {
            return il2cpp::create_object<app::AkQueryRTPCValue__Enum>(get_class());
        }
    } // namespace AkQueryRTPCValue__Enum
} // namespace app::classes::types
