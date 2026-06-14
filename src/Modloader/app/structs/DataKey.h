#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataKey_DEFINED)
#define IL2CPP_STRUCT_DataKey_DEFINED
struct DataColumn__Array;
struct DataKey {
    struct DataColumn__Array* _columns;
};
#endif
#if !defined(IL2CPP_STRUCT_DataKey_FWDDECL)
#define IL2CPP_STRUCT_DataKey_FWDDECL
#include <Modloader/app/structs/DataColumn__Array.h>
#endif
#undef IL2CPP_STRUCT_DataKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataKey_DEFINED) && !defined(IL2CPP_STRUCT_DataKey_FWDDECL)
#include <Modloader/app/structs/DataKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
