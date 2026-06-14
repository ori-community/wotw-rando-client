#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowBuilder_DEFINED)
#include <Modloader/app/structs/DataRowBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_DataRowBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowBuilder_DEFINED
struct DataRowBuilder__Class;
struct DataRowBuilder {
    struct DataRowBuilder__Class* klass;
    MonitorData* monitor;
    struct DataRowBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRowBuilder_FWDDECL)
#define IL2CPP_STRUCT_DataRowBuilder_FWDDECL
#include <Modloader/app/structs/DataRowBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRowBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowBuilder_DEFINED) && !defined(IL2CPP_STRUCT_DataRowBuilder_FWDDECL)
#include <Modloader/app/structs/DataRowBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
