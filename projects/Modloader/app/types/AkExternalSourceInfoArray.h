#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkExternalSourceInfoArray__Class.h>
#include <Modloader/app/structs/AkExternalSourceInfoArray.h>

namespace app::classes::types {
    namespace AkExternalSourceInfoArray {
        inline app::AkExternalSourceInfoArray__Class** type_info = (app::AkExternalSourceInfoArray__Class**)(modloader::win::memory::resolve_rva(0x0475BB98));
        inline app::AkExternalSourceInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkExternalSourceInfoArray__Class>(type_info, "", "AkExternalSourceInfoArray");
        }
        inline app::AkExternalSourceInfoArray* create() {
            return il2cpp::create_object<app::AkExternalSourceInfoArray>(get_class());
        }
    } // namespace AkExternalSourceInfoArray
} // namespace app::classes::types
