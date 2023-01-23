#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsMetaType_AotFailureException__Class.h>
#include <Modloader/app/structs/fsMetaType_AotFailureException.h>

namespace app::classes::types {
    namespace fsMetaType_AotFailureException {
        inline app::fsMetaType_AotFailureException__Class** type_info = (app::fsMetaType_AotFailureException__Class**)(modloader::win::memory::resolve_rva(0x04772950));
        inline app::fsMetaType_AotFailureException__Class* get_class() {
            return il2cpp::get_nested_class<app::fsMetaType_AotFailureException__Class>(type_info, "FullSerializer", "fsMetaType", "AotFailureException");
        }
        inline app::fsMetaType_AotFailureException* create() {
            return il2cpp::create_object<app::fsMetaType_AotFailureException>(get_class());
        }
    } // namespace fsMetaType_AotFailureException
} // namespace app::classes::types
