#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkReflectionPathInfo__Class.h>
#include <Modloader/app/structs/AkReflectionPathInfo.h>

namespace app::classes::types {
    namespace AkReflectionPathInfo {
        inline app::AkReflectionPathInfo__Class** type_info = (app::AkReflectionPathInfo__Class**)(modloader::win::memory::resolve_rva(0x04743308));
        inline app::AkReflectionPathInfo__Class* get_class() {
            return il2cpp::get_class<app::AkReflectionPathInfo__Class>(type_info, "", "AkReflectionPathInfo");
        }
        inline app::AkReflectionPathInfo* create() {
            return il2cpp::create_object<app::AkReflectionPathInfo>(get_class());
        }
    } // namespace AkReflectionPathInfo
} // namespace app::classes::types
