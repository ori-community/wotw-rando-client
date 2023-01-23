#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatPlaceholder_SpiderBatEntityParameters__Class.h>
#include <Modloader/app/structs/SpiderBatPlaceholder_SpiderBatEntityParameters.h>
#include <Modloader/app/structs/SpiderBatPlaceholder_SpiderBatEntityParameters__Boxed.h>

namespace app::classes::types {
    namespace SpiderBatPlaceholder_SpiderBatEntityParameters {
        namespace {
            inline app::SpiderBatPlaceholder_SpiderBatEntityParameters__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatPlaceholder_SpiderBatEntityParameters__Class** type_info = &type_info_ref;
        inline app::SpiderBatPlaceholder_SpiderBatEntityParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatPlaceholder_SpiderBatEntityParameters__Class>(type_info, "", "SpiderBatPlaceholder", "SpiderBatEntityParameters");
        }
        inline app::SpiderBatPlaceholder_SpiderBatEntityParameters* create() {
            return il2cpp::create_object<app::SpiderBatPlaceholder_SpiderBatEntityParameters>(get_class());
        }
        inline app::SpiderBatPlaceholder_SpiderBatEntityParameters__Boxed* box(app::SpiderBatPlaceholder_SpiderBatEntityParameters value) {
            return il2cpp::box_value<app::SpiderBatPlaceholder_SpiderBatEntityParameters__Boxed>(get_class(), value);
        }
    } // namespace SpiderBatPlaceholder_SpiderBatEntityParameters
} // namespace app::classes::types
