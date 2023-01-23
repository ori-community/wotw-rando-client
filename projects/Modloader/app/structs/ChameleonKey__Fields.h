#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChameleonKey__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChameleonKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChameleonKey__Fields_DEFINED)
#define IL2CPP_STRUCT_ChameleonKey__Fields_DEFINED
struct String;
struct Uri;
struct XmlSchema;
struct __declspec(align(8)) ChameleonKey__Fields {
    struct String* targetNS;
    struct Uri* chameleonLocation;
    struct XmlSchema* originalSchema;
    int32_t hashCode;
};
#endif
#if !defined(IL2CPP_STRUCT_ChameleonKey__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChameleonKey__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlSchema.h>
#endif
#undef IL2CPP_STRUCT_ChameleonKey__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChameleonKey__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChameleonKey__Fields_FWDDECL)
#include <Modloader/app/structs/ChameleonKey__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChameleonKey__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
