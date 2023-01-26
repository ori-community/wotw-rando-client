#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConceptScreen_ImageData.h>
#include <Modloader/app/structs/List_1_ConceptScreen_ImageData_.h>
#include <Modloader/app/structs/Predicate_1_ConceptScreen_ImageData_.h>

namespace app::classes::System::Collections::Generic::List_1_ConceptScreen_ImageData_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ConceptScreen_ImageData*, get_Item, (app::List_1_ConceptScreen_ImageData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_ConceptScreen_ImageData_ * this_ptr, app::Predicate_1_ConceptScreen_ImageData_* match))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ConceptScreen_ImageData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ConceptScreen_ImageData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_ConceptScreen_ImageData_
