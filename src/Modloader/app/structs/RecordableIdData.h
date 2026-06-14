#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordableIdData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordableIdData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableIdData_DEFINED)
#include <Modloader/app/structs/RecordableType__Enum.h>
#if defined(IL2CPP_STRUCT_RecordableType__Enum_DEFINED)
#define IL2CPP_STRUCT_RecordableIdData_DEFINED
struct String;
struct RecordableIdData {
    RecordableType__Enum RecordableType;

    int64_t Id;
    struct String* AssetGuid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordableIdData_FWDDECL)
#define IL2CPP_STRUCT_RecordableIdData_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RecordableIdData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableIdData_DEFINED) && !defined(IL2CPP_STRUCT_RecordableIdData_FWDDECL)
#include <Modloader/app/structs/RecordableIdData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordableIdData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
