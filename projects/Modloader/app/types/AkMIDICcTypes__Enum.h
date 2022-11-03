#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDICcTypes__Enum {
        namespace {
            inline app::AkMIDICcTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkMIDICcTypes__Enum__Class** type_info = &type_info_ref;
        inline app::AkMIDICcTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMIDICcTypes__Enum__Class>(type_info, "", "AkMIDICcTypes");
        }
        inline app::AkMIDICcTypes__Enum* create() {
            return il2cpp::create_object<app::AkMIDICcTypes__Enum>(get_class());
        }
    } // namespace AkMIDICcTypes__Enum
} // namespace app::classes::types
