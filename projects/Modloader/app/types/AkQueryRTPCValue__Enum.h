#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkQueryRTPCValue__Enum__Class.h>
#include <Modloader/app/structs/AkQueryRTPCValue__Enum.h>

namespace app::classes::types {
    namespace AkQueryRTPCValue__Enum {
        namespace {
            inline app::AkQueryRTPCValue__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkQueryRTPCValue__Enum__Class** type_info = &type_info_ref;
        inline app::AkQueryRTPCValue__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkQueryRTPCValue__Enum__Class>(type_info, "", "AkQueryRTPCValue");
        }
        inline app::AkQueryRTPCValue__Enum* create() {
            return il2cpp::create_object<app::AkQueryRTPCValue__Enum>(get_class());
        }
    } // namespace AkQueryRTPCValue__Enum
} // namespace app::classes::types
