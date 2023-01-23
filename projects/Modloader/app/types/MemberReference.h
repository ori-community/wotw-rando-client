#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemberReference__Class.h>
#include <Modloader/app/structs/MemberReference.h>

namespace app::classes::types {
    namespace MemberReference {
        inline app::MemberReference__Class** type_info = (app::MemberReference__Class**)(modloader::win::memory::resolve_rva(0x0470A618));
        inline app::MemberReference__Class* get_class() {
            return il2cpp::get_class<app::MemberReference__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "MemberReference");
        }
        inline app::MemberReference* create() {
            return il2cpp::create_object<app::MemberReference>(get_class());
        }
    } // namespace MemberReference
} // namespace app::classes::types
