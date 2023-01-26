#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePa_2_Syst_Li_Expressio_LabelTarg_Syst_Li_Expressio_Interpret_LabelI_.h>
#include <Modloader/app/structs/LabelInfo.h>
#include <Modloader/app/structs/LabelTarget.h>

namespace app::classes::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ {
    IL2CPP_REGISTER_METHOD(0x02545910, bool, ContainsKey, (app::HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ * this_ptr, app::LabelTarget* key))
    IL2CPP_REGISTER_METHOD(0x025457C0, bool, TryGetValue, (app::HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ * this_ptr, app::LabelTarget* key, app::LabelInfo** value))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02545C40, void, set_Item, (app::HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ * this_ptr, app::LabelTarget* key, app::LabelInfo* value))
    IL2CPP_REGISTER_METHOD(0x02545990, app::IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_*, GetEnumerator, (app::HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_
