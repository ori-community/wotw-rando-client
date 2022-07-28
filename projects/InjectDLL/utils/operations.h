#pragma once

bool operator==(const app::Vector3& c1, const app::Vector3& c2);
bool operator!=(const app::Vector3& c1, const app::Vector3& c2);

app::Vector3 operator+(const app::Vector3& a, const app::Vector3& b);
app::Vector3 operator-(const app::Vector3& a, const app::Vector3& b);

bool operator==(const app::Color& c1, const app::Color& c2);
bool operator!=(const app::Color& c1, const app::Color& c2);

bool operator==(const app::MoonGuid& a, const app::MoonGuid& b);