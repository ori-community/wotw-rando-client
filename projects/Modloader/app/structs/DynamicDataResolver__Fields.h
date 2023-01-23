#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataResolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataResolver__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicDataResolver__Fields_DEFINED
struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_;
struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_;
struct __declspec(align(8)) DynamicDataResolver__Fields {
    struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* SerializedDataItems;
    struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_* DataLinks;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataResolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataResolver__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_.h>
#include <Modloader/app/structs/List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataResolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataResolver__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicDataResolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataResolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
