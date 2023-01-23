#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XGameSaveSubmitUpdateCompleted__Class.h>
#include <Modloader/app/structs/XGameSaveSubmitUpdateCompleted.h>

namespace app::classes::types {
    namespace XGameSaveSubmitUpdateCompleted {
        inline app::XGameSaveSubmitUpdateCompleted__Class** type_info = (app::XGameSaveSubmitUpdateCompleted__Class**)(modloader::win::memory::resolve_rva(0x04715598));
        inline app::XGameSaveSubmitUpdateCompleted__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveSubmitUpdateCompleted__Class>(type_info, "XGamingRuntime", "XGameSaveSubmitUpdateCompleted");
        }
        inline app::XGameSaveSubmitUpdateCompleted* create() {
            return il2cpp::create_object<app::XGameSaveSubmitUpdateCompleted>(get_class());
        }
    } // namespace XGameSaveSubmitUpdateCompleted
} // namespace app::classes::types
