#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializerPlugin__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializerPlugin__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializerPlugin__VTable_DEFINED)
#define IL2CPP_STRUCT_ISerializerPlugin__VTable_DEFINED
struct ISerializerPlugin__VTable {
    VirtualInvokeData DeserializeObject;
    VirtualInvokeData DeserializeObject_1;
    VirtualInvokeData DeserializeObject_2;
    VirtualInvokeData SerializeObject;
    VirtualInvokeData SerializeObject_1;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializerPlugin__VTable_FWDDECL)
#define IL2CPP_STRUCT_ISerializerPlugin__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ISerializerPlugin__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializerPlugin__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ISerializerPlugin__VTable_FWDDECL)
#include <Modloader/app/structs/ISerializerPlugin__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializerPlugin__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
