#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkSerializedCallbackHeader {
        inline app::AkSerializedCallbackHeader__Class** type_info = (app::AkSerializedCallbackHeader__Class**)(modloader::win::memory::resolve_rva(0x0473D728));
        inline app::AkSerializedCallbackHeader__Class* get_class() {
            return il2cpp::get_class<app::AkSerializedCallbackHeader__Class>(type_info, "", "AkSerializedCallbackHeader");
        }
        inline app::AkSerializedCallbackHeader* create() {
            return il2cpp::create_object<app::AkSerializedCallbackHeader>(get_class());
        }
    } // namespace AkSerializedCallbackHeader
} // namespace app::classes::types
