#pragma once
#include <Modloader/app/structs/EChaperoneConfigFile__Enum.h>
#include <Modloader/app/structs/EChaperoneConfigFile__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EChaperoneConfigFile__Enum {
        inline app::EChaperoneConfigFile__Enum__Class** type_info() {
            static app::EChaperoneConfigFile__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EChaperoneConfigFile__Enum__Class**)(modloader::win::memory::resolve_rva(0x047831C8));
            }
            return cache;
        }
        inline app::EChaperoneConfigFile__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChaperoneConfigFile__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EChaperoneConfigFile");
        }
        inline app::EChaperoneConfigFile__Enum* create() {
            return il2cpp::create_object<app::EChaperoneConfigFile__Enum>(get_class());
        }
    } // namespace EChaperoneConfigFile__Enum
} // namespace app::classes::types
