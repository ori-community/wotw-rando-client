#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataView__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataView__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataView__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DataView__StaticFields_DEFINED
struct ListChangedEventArgs;
struct DataView__StaticFields {
    struct ListChangedEventArgs* s_resetEventArgs;
    int32_t s_objectTypeCount;
};
#endif
#if !defined(IL2CPP_STRUCT_DataView__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DataView__StaticFields_FWDDECL
#include <Modloader/app/structs/ListChangedEventArgs.h>
#endif
#undef IL2CPP_STRUCT_DataView__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataView__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DataView__StaticFields_FWDDECL)
#include <Modloader/app/structs/DataView__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataView__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
