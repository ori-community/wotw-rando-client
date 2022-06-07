#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::XMLDiffLoader {
    IL2CPP_REGISTER_METHOD(0x023D0AD0, void, LoadDiffGram_1, (app::XMLDiffLoader * this_ptr, app::DataSet * ds, app::XmlReader * data_text_reader))
    IL2CPP_REGISTER_METHOD(0x023D0E80, void, CreateTablesHierarchy, (app::XMLDiffLoader * this_ptr, app::DataTable * dt))
    IL2CPP_REGISTER_METHOD(0x023D1190, void, LoadDiffGram_2, (app::XMLDiffLoader * this_ptr, app::DataTable * dt, app::XmlReader * data_text_reader))
    IL2CPP_REGISTER_METHOD(0x023D1650, void, ProcessDiffs_1, (app::XMLDiffLoader * this_ptr, app::DataSet * ds, app::XmlReader * ssync))
    IL2CPP_REGISTER_METHODINFO(0x0478DBA0, XMLDiffLoader_ProcessDiffs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023D19B0, void, ProcessDiffs_2, (app::XMLDiffLoader * this_ptr, app::ArrayList * table_list, app::XmlReader * ssync))
    IL2CPP_REGISTER_METHODINFO(0x04788960, XMLDiffLoader_ProcessDiffs_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023D1CC0, void, ProcessErrors_1, (app::XMLDiffLoader * this_ptr, app::DataSet * ds, app::XmlReader * ssync))
    IL2CPP_REGISTER_METHODINFO(0x04733080, XMLDiffLoader_ProcessErrors__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023D20A0, void, ProcessErrors_2, (app::XMLDiffLoader * this_ptr, app::ArrayList * dt, app::XmlReader * ssync))
    IL2CPP_REGISTER_METHODINFO(0x04761160, XMLDiffLoader_ProcessErrors_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023D2570, app::DataTable *, GetTable, (app::XMLDiffLoader * this_ptr, app::String * table_name, app::String * ns))
    IL2CPP_REGISTER_METHOD(0x023D2850, int32_t, ReadOldRowData, (app::XMLDiffLoader * this_ptr, app::DataSet * ds, app::DataTable * * table, int32_t * pos, app::XmlReader * row))
    IL2CPP_REGISTER_METHODINFO(0x04759B28, XMLDiffLoader_ReadOldRowData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023D3690, void, SkipWhitespaces, (app::XMLDiffLoader * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XMLDiffLoader * this_ptr))
}
