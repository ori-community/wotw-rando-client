#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_DEFINED
struct String;
struct Object;
struct DelegateSerializationHolder_DelegateEntry;
struct __declspec(align(8)) DelegateSerializationHolder_DelegateEntry__Fields {
    struct String* type;
    struct String* assembly;
    struct Object* target;
    struct String* targetTypeAssembly;
    struct String* targetTypeName;
    struct String* methodName;
    struct DelegateSerializationHolder_DelegateEntry* delegateEntry;
};
#endif
#if !defined(IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_FWDDECL
#include <Modloader/app/structs/DelegateSerializationHolder_DelegateEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelegateSerializationHolder_DelegateEntry__Fields_FWDDECL)
#include <Modloader/app/structs/DelegateSerializationHolder_DelegateEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelegateSerializationHolder_DelegateEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
