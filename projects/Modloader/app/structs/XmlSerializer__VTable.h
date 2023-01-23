#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializer__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer__VTable_DEFINED)
#define IL2CPP_STRUCT_XmlSerializer__VTable_DEFINED
struct XmlSerializer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUnknownAttribute;
    VirtualInvokeData OnUnknownElement;
    VirtualInvokeData OnUnknownNode;
    VirtualInvokeData OnUnreferencedObject;
    VirtualInvokeData CreateReader;
    VirtualInvokeData CreateWriter;
    VirtualInvokeData Deserialize;
    VirtualInvokeData Serialize;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializer__VTable_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializer__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlSerializer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer__VTable_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializer__VTable_FWDDECL)
#include <Modloader/app/structs/XmlSerializer__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializer__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
