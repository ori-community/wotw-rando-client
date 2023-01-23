#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XGameSaveBlob__Class.h>
#include <Modloader/app/structs/XGameSaveBlob.h>
#include <Modloader/app/structs/XGameSaveBlob__Array.h>

namespace app::classes::types {
    namespace XGameSaveBlob {
        inline app::XGameSaveBlob__Class** type_info = (app::XGameSaveBlob__Class**)(modloader::win::memory::resolve_rva(0x04766EC8));
        inline app::XGameSaveBlob__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveBlob__Class>(type_info, "XGamingRuntime", "XGameSaveBlob");
        }
        inline app::XGameSaveBlob* create() {
            return il2cpp::create_object<app::XGameSaveBlob>(get_class());
        }
        inline app::XGameSaveBlob__Array* create_array(int size) {
            return il2cpp::array_new<app::XGameSaveBlob__Array>(get_class(), size);
        }
        inline app::XGameSaveBlob__Array* create_array(const std::vector<app::XGameSaveBlob*>& items) {
            return il2cpp::array_new<app::XGameSaveBlob__Array>(get_class(), items);
        }
    } // namespace XGameSaveBlob
} // namespace app::classes::types
