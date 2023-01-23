#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadingBootstrap_Start_d_25__Class.h>
#include <Modloader/app/structs/LoadingBootstrap_Start_d_25.h>

namespace app::classes::types {
    namespace LoadingBootstrap_Start_d_25 {
        inline app::LoadingBootstrap_Start_d_25__Class** type_info = (app::LoadingBootstrap_Start_d_25__Class**)(modloader::win::memory::resolve_rva(0x04742DA8));
        inline app::LoadingBootstrap_Start_d_25__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBootstrap_Start_d_25__Class>(type_info, "", "LoadingBootstrap", "<Start>d__25");
        }
        inline app::LoadingBootstrap_Start_d_25* create() {
            return il2cpp::create_object<app::LoadingBootstrap_Start_d_25>(get_class());
        }
    } // namespace LoadingBootstrap_Start_d_25
} // namespace app::classes::types
